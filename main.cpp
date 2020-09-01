#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    char temp;
    printf("Hello World!\n");
    printf("Enter any character: ");
    scanf("%c", &temp);
    printf("\n\tYour character: %c", temp);

    return a.exec();
}
