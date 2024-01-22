class Dummy {
public:
    Dummy(int c = 0) { credits = c;}
private:
    int credits;
};

int main(){
    
    Dummy a; // Ruft den Default Konstruktor ohne Parameter auf
    Dummy b(37); 
    Dummy c = 99;
    return 0;
}

// Wichtig! new allokiert speicher auf dem heap