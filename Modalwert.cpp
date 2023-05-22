#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    int Varzahl[100]{};
    int Modalwert[100]{};
    int Häufigkeit[100]{};
    int maxHäufigkeit = 0;
    int modalwertCount = 0;

    srand((unsigned)time(NULL));

    //zufällige Zahlen ausgeben
    cout << "Erzeugte Zahlen:\n";
    for (int i = 0; i < 100; i++)
    {
        Varzahl[i] = (rand() % 100 + 1);
        cout << Varzahl[i] << "\t";
    }
    cout << "\n";

    //Zahlen mit Bubble Sort sortieren
    cout << "Sortierte Zufallszahlen:\n";
    for (int a = 1; a < 100; a++)
    {
        for (int j = a; j > 0; --j)
        {
            if (Varzahl[j] < Varzahl[j - 1])
            {
                int tmp = Varzahl[j];
                Varzahl[j] = Varzahl[j - 1];
                Varzahl[j - 1] = tmp;
            }
            else
            {
                break; // Wenn die Zahlen bereits sortiert sind, beende die Schleife
            }
        }
    }

    for (int a = 0; a < 100; a++)
    {
        cout << Varzahl[a] << "  ";
    }

    cout << "end\n";

    //Häufikeit einer Zahl berechnen
    for (int m = 0; m < 100; m++)
    {
        Häufigkeit[m] = 1;

        for (int b = m + 1; b < 100; b++)
        {
            if (Varzahl[m] == Varzahl[b])
            {
                Häufigkeit[m]++;
            }
        }
    }

    //Maximum berechnen
    for (int b = 0; b < 100; b++)
    {
        if (Häufigkeit[b] > maxHäufigkeit)
        {
            maxHäufigkeit = Häufigkeit[b];
        }
    }

    //Modalwert speichern
    for (int k = 0; k < 100; k++)
    {
        if (Häufigkeit[k] == maxHäufigkeit)
        {
            Modalwert[modalwertCount] = Varzahl[k];
            modalwertCount++;
        }
    }

    //Modalwert ausgeben
    cout << "Der Modalwert ist:";
    for (int k = 0; k < modalwertCount; k++)
    {
        cout << Modalwert[k] << " ";

    }

    //Häufigkeit ausgeben
    cout << "Häufigkeit: ";
    cout << maxHäufigkeit;

    return 0;
}
