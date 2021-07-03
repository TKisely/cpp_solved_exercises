using namespace std;
#include <iostream>

void monthDaysArray(const int length, const int firstMonday){
    string Days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int actual = 7-firstMonday+1;
    for (int i = 1; i < length+1; ++i) {
        if(actual==7){actual=0;}
        cout<<i<<" : "<<Days[actual]<<endl;
        actual++;
    }
}

void swapTwoValues(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
}

void daysToYearsWeeksDays(int days){
    int years=0, weeks=0;
    while(days>364){
        days-=365;
        years++;
    }
    while(days>6){
        days-=7;
        weeks++;
    }

    cout<<"Yr: "<<years<<"\t\tW: "<<weeks<<"\t\tD: "<<days<<endl;
}

string concatTwoStrings(const string& a, const string& b){return a+b;}

int lengthOfString(const string& in){
    int i = 0;
    for (; in[i] != '\0' ; ++i);
    return i;
}

void lowerToUpper(const string& low){
    string upper=low;
    for (int i = 0; low[i]!='\0'; ++i) {
        if(low[i]>96&&low[i]<123){
            upper[i]=low[i]-(97-65);
        }
        else{
            upper[i]=low[i];
        }
    }
    cout<<upper;
}

void reverseString(const string& inOrder){
    string reverse=inOrder;
    int l= lengthOfString(inOrder);
    for (int i = 0; i<l; ++i) {
        reverse[l-i-1]=inOrder[i];
    }
    cout<<reverse<<endl;
}

void countGivenLetterInString(const string& text, const char letter){
    int sum=0;
    for (int i = 0; text[i]!='\0'; ++i) {
        if(text[i]==letter){sum++;}
    }
    cout<<sum<<endl;
}

void oddOrEven(int num){
    if(num%2==0) {cout<<"even\n";return;}
    cout<<"odd\n";

}

void printAToZ(){
    for (int i = 0; i <= 'Z'-'A'; ++i) {
        cout<<(char)('A'+i)<<endl;
    }
}

void printaToz(){
    for (int i = 'a'; i <= 'z'; ++i) {
        cout<<(char)(i)<<endl;
    }
}

void orderNumberDigits(int number){
    string digits=std::to_string(number);

    for (int i = 0; i < digits.length(); ++i) {
        //TODO: sorting digits
    }
}

void firstAndLastDigit(int number){
    string digits=std::to_string(number);
    cout<<digits[0]<<"\t\t"<<digits[digits.length()-1]<<endl;
}

void arraySum(int *array, int length){
    int sum=0;
    for (int i = 0; i < length; ++i) {
        sum+=array[i];
    }

    cout<<sum<<endl;
}

bool isIn(int *array, int length, int num){
    for (int i = 0; i < length; ++i) {
        if(array[i]==num){
            return true;
        }
    }
    return false;
}

int indexOfSearchedNum(int *array, int length, int num){
    int i;
    for (i = 0; array[i]!=num&&i<length; ++i);
    return i;
}

void countEachElement(int *array, int length){
    int elements[length];
    int count[length];
    int elementsLength=0;
    for (int i = 0; i < length; ++i) {
        if(isIn(elements,elementsLength,array[i])){
            //TODO:increment
            int index=indexOfSearchedNum(elements,elementsLength,array[i]);
            count[index]++;
        }else{
            //TODO:add it to elements, increment elements length, set count i to 1
            elements[elementsLength]=array[i];
            count[elementsLength]=1;
            elementsLength++;
        }
    }

    for (int i = 0; i < elementsLength; ++i) {
        cout<<elements[i]<<" : "<<count[i]<<endl;
    }
}

void deleteAllDuplicate(int *array, int length){
    int singleLadies[length];
    int singleLength=0;
    for (int i = 0; i < length; ++i) {
        if(!isIn(singleLadies,singleLength,array[i])){
            singleLadies[singleLength]=array[i];
            singleLength++;
        }
    }
    for (int i = 0; i < singleLength; ++i) {
        cout<<singleLadies[i]<<endl;
    }
}

int main() {

    //
    //techstudy.org
    //
//    monthDaysArray(31,3);
//
//    daysToYearsWeeksDays(541);
//
//    cout<<concatTwoStrings("alma es"," eper");
//
//    cout<<lengthOfString("Alma");
//
//    lowerToUpper("It wOrks from Aa to zZz...");
//
//    reverseString("Heavy");
//
//    countGivenLetterInString("I went to the shopping market", 't');
//
//    oddOrEven(45);
//    oddOrEven(64);
//
//    printAToZ();
//    printaToz();
//
//    firstAndLastDigit(105);
//
//    int arr[5]={1,3,5,6,5};
//    arraySum(arr,5);
//
//    int arr[5]={1,3,5,6,5};
//    countEachElement(arr,5);
//
//    deleteAllDuplicate(arr,5);


    std::cout << "\n\nHello, World!" << std::endl;
    return 0;
}
