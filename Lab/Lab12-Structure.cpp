/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/

#include <stdio.h>
    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    void grads(int grad) {
        printf (" ") ;
        if ( grad >= 85) printf ( "A+" ) ;
        else if ( grad >= 80 && grad <= 84 ) printf (" A") ;
        else if ( grad >= 75 && grad <= 79 ) printf ("B+") ;
        else if ( grad >= 70 && grad <= 74 ) printf (" B") ;
        else if ( grad >= 65 && grad <= 69 ) printf ("C+") ;
        else if ( grad >= 60 && grad <= 64 ) printf (" C") ;
        else if ( grad >= 55 && grad <= 59 ) printf ("D+") ;
        else if ( grad >= 50 && grad <= 59 ) printf (" D") ;
        else printf ( "F" ) ;
    }  
    int main() {
    struct Student CPE[3] ;

    for  (int i = 0 ; i < 3 ; i++ ) {
        printf ( "Student %d:\n" , i+1 ) ;
        printf ( "Name [%d] : \n", i+1 ) ; 
        scanf ( "%s" , CPE[i] . Name ) ;
        printf ( "ID [%d] : \n " , i+1 ) ; 
        scanf ( "%s", CPE[i] . ID ) ;
        printf ( "Scores in Subject 1 :\n " ) ; 
        scanf ( "%f", &CPE[i] . ScoreSub1 ) ;
        printf ( "Scores in Subject 2 :\n " ) ; 
        scanf ( "%f", &CPE[i] . ScoreSub2 ) ;
        printf ( "Scores in Subject 3 :\n " ) ; 
        scanf ( "%f", &CPE[i] . ScoreSub3 ) ;
        printf ( "Scores in Subject 4 :\n " ) ; 
        scanf ( "%f", &CPE[i] . ScoreSub4 ) ;
        printf ("Scores in Subject 5 :\n " ) ; 
        scanf ( "%f", &CPE[i] . ScoreSub5 ) ;
    }//end for 


    printf ( "Output:\n" ) ;
    printf ( "Student Details:\n" ) ;

    for (int n = 0 ; n < 3 ; n++ ) {

        printf ( "\nStuden %d : " , n+1 ) ;
        printf ( "Name : %s\n", CPE[n].Name  ) ;
        printf ( "ID : %s\n", CPE[n].ID  ) ;
        printf ( "Score : %.0f %.0f %.0f %.0f %.0f", CPE[n]. ScoreSub1, CPE[n]. ScoreSub2, CPE[n]. ScoreSub3, CPE[n]. ScoreSub4, CPE[n]. ScoreSub5   ) ;
        printf ( "\nGrades : " ) ;
        grads ( CPE[n]. ScoreSub1 ) ;
        grads ( CPE[n]. ScoreSub2 ) ;
        grads ( CPE[n]. ScoreSub3 ) ;
        grads ( CPE[n]. ScoreSub4 ) ;
        grads ( CPE[n]. ScoreSub5 ) ;
        printf ("\nAverage Scores: " ) ;
        float AV = CPE[n]. ScoreSub1 + CPE[n]. ScoreSub2 + CPE[n]. ScoreSub3 + CPE[n]. ScoreSub4 + CPE[n]. ScoreSub5 ; 
        printf ("%.1f",AV/5 ) ;
  
    }//end for

    return 0 ;
}//end main function