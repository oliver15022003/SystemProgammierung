/// STUDI_H ///

class Name {
public:
    Name(const char* n);
    Name(const Name &n);
};

class Studi {
public:
    Studi(int cps, const Name &n);
    //Kopierkonstruktor hinzugefuegt
    Studi(const Studi &other);
    //Destruktor hinzugefuegt
    ~Studi();
    //Kopierzuweisungsoperator hinzugefuegt
    Studi& operator = (const Studi &other);
    void grading(int points);
private:
    Name name;
    int ects;
};