#include<iostream>
using namespace std;
struct L {
	L* next;
	int a;
	int b;
	int k;
};
class ass {
private:
	L* mn = NULL;
	int t = 0;
public:
	void in(const int a1, const int b1) {
		L* temp = new L;
		temp->a = a1;
		temp->b = b1;
		temp->k = t++;
		temp->next = mn;
		mn = temp;
	}
	ass operator+(ass& m) {
		ass t; int k = 0, k1 = 0;
		for (Iterator it = begin(); it != end(); ++it)k++;
		for (Iterator it = m.begin(); it != m.end(); ++it)k1++;
		if (k >= k1) {
			Iterator it1 = m.begin();
			for (Iterator it = begin(); it != end(); ++it) {
				if (it1 != m.end() && +it == +it1) {
					L* temp = new L;
					temp->a = *it + *it1;
					temp->b = -it + -it1;
					temp->k = t.t++;
					temp->next = t.mn;
					t.mn = temp;
					++it1;
				}
				else {
					L* temp = new L;
					temp->a = *it;
					temp->b = -it;
					temp->k = t.t++;
					temp->next = t.mn;
					t.mn = temp;
				}
			}
		}
		else {
			Iterator it1 = begin();
			for (Iterator it = m.begin(); it != m.end(); ++it) {
				if (it1 != end() && +it == +it1) {
					L* temp = new L;
					temp->a = *it + *it1;
					temp->b = -it + -it1;
					temp->k = t.t++;
					temp->next = t.mn;
					t.mn = temp;
					++it1;
				}
				else {
					L* temp = new L;
					temp->a = *it;
					temp->b = -it;
					temp->k = t.t++;
					temp->next = t.mn;
					t.mn = temp;
				}
			}
		}
		ass t1;
		for (Iterator it = t.begin(); it != t.end(); ++it) {
			L* temp = new L;
			temp->a = *it;
			temp->b = -it;
			temp->k = t1.t++;
			temp->next = t1.mn;
			t1.mn = temp;
		}
		return t1;
	}
	void operator*(ass& m) {
		ass t; int k = 0, k1 = 0;
		for (Iterator it = begin(); it != end(); ++it)k++;
		for (Iterator it = m.begin(); it != m.end(); ++it)k1++;
		if (k >= k1) {
			int** r = new int* [k + k];
			for (int i = 0; i <= k; i++)r[i] = new int[(k + k) * 2];
			int** r1 = new int* [k + k];
			for (int i = 0; i <= k; i++)r1[i] = new int[(k + k) * 2];
			int** r2 = new int* [k + k];
			for (int i = 0; i <= k; i++)r2[i] = new int[(k + k) * 2];
			int i = 0, j = 0;
			for (Iterator it1 = m.begin(); it1 != m.end(); ++it1) {
				if (j != k - 1) {
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = *it * *it1;
						r2[j][i] = +it + k - 1;
						r1[j][i] = 0;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = -it * *it1;
						r2[j][i] = k - j - 1;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = *it * -it1;
						r2[j][i] = k - j - 1;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = -it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it + k - 1;
						i++;
					}
				}
				else {
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = *it * *it1;
						r2[j][i] = +it;
						r1[j][i] = 0;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = -it * *it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = *it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = begin(); it != end(); ++it) {
						r[j][i] = -it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
				}
				j++;
				i = 0;
			}
			for (int j = 0; j != k1; j++) {
				for (int i = 0; i != (k + k) * 2; i++) {
					cout << r[j][i] << "(x^" << r1[j][i] << ")(y^" << r2[j][i] << ")+";
					if (i == (k + k) - 1)cout << endl;
				}
				cout << endl;
			}

			for (int i = 0; i <= k; i++)delete[]r[i];
			delete[]r;
			for (int i = 0; i <= k; i++)delete[]r1[i];
			delete[]r1;
			for (int i = 0; i <= k; i++)delete[]r2[i];
			delete[]r2;
		}
		else {
			int** r = new int* [k1 + k1];
			for (int i = 0; i <= k1; i++)r[i] = new int[(k1 + k1) * 2];
			int** r1 = new int* [k1 + k1];
			for (int i = 0; i <= k1; i++)r1[i] = new int[(k1 + k1) * 2];
			int** r2 = new int* [k1 + k1];
			for (int i = 0; i <= k1; i++)r2[i] = new int[(k1 + k1) * 2];
			int i = 0, j = 0;
			for (Iterator it1 = begin(); it1 != end(); ++it1) {
				if (j != k1 - 1) {
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = *it * *it1;
						r2[j][i] = +it + k1 - 1;
						r1[j][i] = 0;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = -it * *it1;
						r2[j][i] = k1 - j - 1;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = *it * -it1;
						r2[j][i] = k1 - j - 1;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = -it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it + k1 - 1;
						i++;
					}
				}
				else {
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = *it * *it1;
						r2[j][i] = +it;
						r1[j][i] = 0;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = -it * *it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = *it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
					for (Iterator it = m.begin(); it != m.end(); ++it) {
						r[j][i] = -it * -it1;
						r2[j][i] = 0;
						r1[j][i] = +it;
						i++;
					}
				}
				j++;
				i = 0;
			}
			for (int j = 0; j != k; j++) {
				for (int i = 0; i != (k1 + k1) * 2; i++) {
					cout << r[j][i] << "(x^" << r1[j][i] << ")(y^" << r2[j][i] << ")+";
					if (i == (k1 + k1) - 1)cout << endl;
				}
				cout << endl;
			}
			for (int i = 0; i <= k1; i++)delete[]r[i];
			delete[]r;
			for (int i = 0; i <= k1; i++)delete[]r1[i];
			delete[]r1;
			for (int i = 0; i <= k1; i++)delete[]r2[i];
			delete[]r2;
		}

	}
	void print() {
		for (Iterator it = begin(); it != end(); ++it) {
			if (+it == 0) { cout << -it + *it; continue; }
			cout << -it << "*x^" << +it << " + " << *it << "*y^" << +it << " + ";
		}
		cout << endl;
	}
	class Iterator {
	public:
		Iterator(L* node) : m_node(node) { }
		bool operator==(const Iterator& other) const {
			if (this == &other) {
				return true;
			}
			return m_node == other.m_node;
		}
		bool operator!=(const Iterator& other) const {
			return !operator==(other);
		}
		int operator*() {
			if (m_node) {
				return m_node->a;
			}
			return int();
		}
		int operator-() {
			if (m_node) {
				return m_node->b;
			}
			return int();
		}
		int operator+() const {
			if (m_node) {
				return m_node->k;
			}
			return int();
		}
		void operator++() {
			if (m_node) {
				m_node = m_node->next;
			}
		}
		L* m_node;
	};
	Iterator begin() {
		return Iterator(mn);
	};
	Iterator end() {
		return Iterator(NULL);
	}
};
int main() {
	ass m, m1, m2, m3; int s = 0, t = 0, t1 = 0;
	cout << "Input polynomial power" << endl;
	cin >> s;
	cout << "Input 1polynomial coefficient" << endl;
	for (int i = 0; i <= s; i++)
	{
		cin >> t;
		cin >> t1;
		m.in(t, t1);
	}
	cout << "Input 2polynomial coefficient" << endl;
	for (int i = 0; i <= s; i++)
	{
		cin >> t;
		cin >> t1;
		m1.in(t, t1);
	}
	m2 = m + m1;
	cout << "First polynomial" << endl;
	m.print();
	cout << "Second polynomial" << endl;
	m1.print();
	cout << "Summ polynomial" << endl;
	m2.print();
	cout << "Proisv polynomial" << endl;
	m* m1;
}
