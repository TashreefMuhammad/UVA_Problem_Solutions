#include <iostream>
#include <map>

using namespace std;

typedef struct letters let;

struct letters{
    int i, v, x, l, c;
};

map <int, let> cnt;
void prepare();

int main(void)
{
    prepare();

    int n;

    while(true)
    {
        cin >> n;
        if(n == 0)
            break;
        cout << n << ": " << cnt[n].i << " i, " << cnt[n].v << " v, " << cnt[n].x << " x, " << cnt[n].l << " l, " << cnt[n].c << " c\n";
    }
    return 0;
}

void prepare()
{
    // Generated using Spreadsheet formulas.
    // Character Counting: = LEN(Cell)-LEN(SUBSTITUTE(Cell,Character,""))
    // Constructed each line using & operator and concatanated strings.
    cnt[1].i=1, cnt[1].v=0, cnt[1].x=0, cnt[1].l=0, cnt[1].c=0;
    cnt[2].i=3, cnt[2].v=0, cnt[2].x=0, cnt[2].l=0, cnt[2].c=0;
    cnt[3].i=6, cnt[3].v=0, cnt[3].x=0, cnt[3].l=0, cnt[3].c=0;
    cnt[4].i=7, cnt[4].v=1, cnt[4].x=0, cnt[4].l=0, cnt[4].c=0;
    cnt[5].i=7, cnt[5].v=2, cnt[5].x=0, cnt[5].l=0, cnt[5].c=0;
    cnt[6].i=8, cnt[6].v=3, cnt[6].x=0, cnt[6].l=0, cnt[6].c=0;
    cnt[7].i=10, cnt[7].v=4, cnt[7].x=0, cnt[7].l=0, cnt[7].c=0;
    cnt[8].i=13, cnt[8].v=5, cnt[8].x=0, cnt[8].l=0, cnt[8].c=0;
    cnt[9].i=14, cnt[9].v=5, cnt[9].x=1, cnt[9].l=0, cnt[9].c=0;
    cnt[10].i=14, cnt[10].v=5, cnt[10].x=2, cnt[10].l=0, cnt[10].c=0;
    cnt[11].i=15, cnt[11].v=5, cnt[11].x=3, cnt[11].l=0, cnt[11].c=0;
    cnt[12].i=17, cnt[12].v=5, cnt[12].x=4, cnt[12].l=0, cnt[12].c=0;
    cnt[13].i=20, cnt[13].v=5, cnt[13].x=5, cnt[13].l=0, cnt[13].c=0;
    cnt[14].i=21, cnt[14].v=6, cnt[14].x=6, cnt[14].l=0, cnt[14].c=0;
    cnt[15].i=21, cnt[15].v=7, cnt[15].x=7, cnt[15].l=0, cnt[15].c=0;
    cnt[16].i=22, cnt[16].v=8, cnt[16].x=8, cnt[16].l=0, cnt[16].c=0;
    cnt[17].i=24, cnt[17].v=9, cnt[17].x=9, cnt[17].l=0, cnt[17].c=0;
    cnt[18].i=27, cnt[18].v=10, cnt[18].x=10, cnt[18].l=0, cnt[18].c=0;
    cnt[19].i=28, cnt[19].v=10, cnt[19].x=12, cnt[19].l=0, cnt[19].c=0;
    cnt[20].i=28, cnt[20].v=10, cnt[20].x=14, cnt[20].l=0, cnt[20].c=0;
    cnt[21].i=29, cnt[21].v=10, cnt[21].x=16, cnt[21].l=0, cnt[21].c=0;
    cnt[22].i=31, cnt[22].v=10, cnt[22].x=18, cnt[22].l=0, cnt[22].c=0;
    cnt[23].i=34, cnt[23].v=10, cnt[23].x=20, cnt[23].l=0, cnt[23].c=0;
    cnt[24].i=35, cnt[24].v=11, cnt[24].x=22, cnt[24].l=0, cnt[24].c=0;
    cnt[25].i=35, cnt[25].v=12, cnt[25].x=24, cnt[25].l=0, cnt[25].c=0;
    cnt[26].i=36, cnt[26].v=13, cnt[26].x=26, cnt[26].l=0, cnt[26].c=0;
    cnt[27].i=38, cnt[27].v=14, cnt[27].x=28, cnt[27].l=0, cnt[27].c=0;
    cnt[28].i=41, cnt[28].v=15, cnt[28].x=30, cnt[28].l=0, cnt[28].c=0;
    cnt[29].i=42, cnt[29].v=15, cnt[29].x=33, cnt[29].l=0, cnt[29].c=0;
    cnt[30].i=42, cnt[30].v=15, cnt[30].x=36, cnt[30].l=0, cnt[30].c=0;
    cnt[31].i=43, cnt[31].v=15, cnt[31].x=39, cnt[31].l=0, cnt[31].c=0;
    cnt[32].i=45, cnt[32].v=15, cnt[32].x=42, cnt[32].l=0, cnt[32].c=0;
    cnt[33].i=48, cnt[33].v=15, cnt[33].x=45, cnt[33].l=0, cnt[33].c=0;
    cnt[34].i=49, cnt[34].v=16, cnt[34].x=48, cnt[34].l=0, cnt[34].c=0;
    cnt[35].i=49, cnt[35].v=17, cnt[35].x=51, cnt[35].l=0, cnt[35].c=0;
    cnt[36].i=50, cnt[36].v=18, cnt[36].x=54, cnt[36].l=0, cnt[36].c=0;
    cnt[37].i=52, cnt[37].v=19, cnt[37].x=57, cnt[37].l=0, cnt[37].c=0;
    cnt[38].i=55, cnt[38].v=20, cnt[38].x=60, cnt[38].l=0, cnt[38].c=0;
    cnt[39].i=56, cnt[39].v=20, cnt[39].x=64, cnt[39].l=0, cnt[39].c=0;
    cnt[40].i=56, cnt[40].v=20, cnt[40].x=65, cnt[40].l=1, cnt[40].c=0;
    cnt[41].i=57, cnt[41].v=20, cnt[41].x=66, cnt[41].l=2, cnt[41].c=0;
    cnt[42].i=59, cnt[42].v=20, cnt[42].x=67, cnt[42].l=3, cnt[42].c=0;
    cnt[43].i=62, cnt[43].v=20, cnt[43].x=68, cnt[43].l=4, cnt[43].c=0;
    cnt[44].i=63, cnt[44].v=21, cnt[44].x=69, cnt[44].l=5, cnt[44].c=0;
    cnt[45].i=63, cnt[45].v=22, cnt[45].x=70, cnt[45].l=6, cnt[45].c=0;
    cnt[46].i=64, cnt[46].v=23, cnt[46].x=71, cnt[46].l=7, cnt[46].c=0;
    cnt[47].i=66, cnt[47].v=24, cnt[47].x=72, cnt[47].l=8, cnt[47].c=0;
    cnt[48].i=69, cnt[48].v=25, cnt[48].x=73, cnt[48].l=9, cnt[48].c=0;
    cnt[49].i=70, cnt[49].v=25, cnt[49].x=75, cnt[49].l=10, cnt[49].c=0;
    cnt[50].i=70, cnt[50].v=25, cnt[50].x=75, cnt[50].l=11, cnt[50].c=0;
    cnt[51].i=71, cnt[51].v=25, cnt[51].x=75, cnt[51].l=12, cnt[51].c=0;
    cnt[52].i=73, cnt[52].v=25, cnt[52].x=75, cnt[52].l=13, cnt[52].c=0;
    cnt[53].i=76, cnt[53].v=25, cnt[53].x=75, cnt[53].l=14, cnt[53].c=0;
    cnt[54].i=77, cnt[54].v=26, cnt[54].x=75, cnt[54].l=15, cnt[54].c=0;
    cnt[55].i=77, cnt[55].v=27, cnt[55].x=75, cnt[55].l=16, cnt[55].c=0;
    cnt[56].i=78, cnt[56].v=28, cnt[56].x=75, cnt[56].l=17, cnt[56].c=0;
    cnt[57].i=80, cnt[57].v=29, cnt[57].x=75, cnt[57].l=18, cnt[57].c=0;
    cnt[58].i=83, cnt[58].v=30, cnt[58].x=75, cnt[58].l=19, cnt[58].c=0;
    cnt[59].i=84, cnt[59].v=30, cnt[59].x=76, cnt[59].l=20, cnt[59].c=0;
    cnt[60].i=84, cnt[60].v=30, cnt[60].x=77, cnt[60].l=21, cnt[60].c=0;
    cnt[61].i=85, cnt[61].v=30, cnt[61].x=78, cnt[61].l=22, cnt[61].c=0;
    cnt[62].i=87, cnt[62].v=30, cnt[62].x=79, cnt[62].l=23, cnt[62].c=0;
    cnt[63].i=90, cnt[63].v=30, cnt[63].x=80, cnt[63].l=24, cnt[63].c=0;
    cnt[64].i=91, cnt[64].v=31, cnt[64].x=81, cnt[64].l=25, cnt[64].c=0;
    cnt[65].i=91, cnt[65].v=32, cnt[65].x=82, cnt[65].l=26, cnt[65].c=0;
    cnt[66].i=92, cnt[66].v=33, cnt[66].x=83, cnt[66].l=27, cnt[66].c=0;
    cnt[67].i=94, cnt[67].v=34, cnt[67].x=84, cnt[67].l=28, cnt[67].c=0;
    cnt[68].i=97, cnt[68].v=35, cnt[68].x=85, cnt[68].l=29, cnt[68].c=0;
    cnt[69].i=98, cnt[69].v=35, cnt[69].x=87, cnt[69].l=30, cnt[69].c=0;
    cnt[70].i=98, cnt[70].v=35, cnt[70].x=89, cnt[70].l=31, cnt[70].c=0;
    cnt[71].i=99, cnt[71].v=35, cnt[71].x=91, cnt[71].l=32, cnt[71].c=0;
    cnt[72].i=101, cnt[72].v=35, cnt[72].x=93, cnt[72].l=33, cnt[72].c=0;
    cnt[73].i=104, cnt[73].v=35, cnt[73].x=95, cnt[73].l=34, cnt[73].c=0;
    cnt[74].i=105, cnt[74].v=36, cnt[74].x=97, cnt[74].l=35, cnt[74].c=0;
    cnt[75].i=105, cnt[75].v=37, cnt[75].x=99, cnt[75].l=36, cnt[75].c=0;
    cnt[76].i=106, cnt[76].v=38, cnt[76].x=101, cnt[76].l=37, cnt[76].c=0;
    cnt[77].i=108, cnt[77].v=39, cnt[77].x=103, cnt[77].l=38, cnt[77].c=0;
    cnt[78].i=111, cnt[78].v=40, cnt[78].x=105, cnt[78].l=39, cnt[78].c=0;
    cnt[79].i=112, cnt[79].v=40, cnt[79].x=108, cnt[79].l=40, cnt[79].c=0;
    cnt[80].i=112, cnt[80].v=40, cnt[80].x=111, cnt[80].l=41, cnt[80].c=0;
    cnt[81].i=113, cnt[81].v=40, cnt[81].x=114, cnt[81].l=42, cnt[81].c=0;
    cnt[82].i=115, cnt[82].v=40, cnt[82].x=117, cnt[82].l=43, cnt[82].c=0;
    cnt[83].i=118, cnt[83].v=40, cnt[83].x=120, cnt[83].l=44, cnt[83].c=0;
    cnt[84].i=119, cnt[84].v=41, cnt[84].x=123, cnt[84].l=45, cnt[84].c=0;
    cnt[85].i=119, cnt[85].v=42, cnt[85].x=126, cnt[85].l=46, cnt[85].c=0;
    cnt[86].i=120, cnt[86].v=43, cnt[86].x=129, cnt[86].l=47, cnt[86].c=0;
    cnt[87].i=122, cnt[87].v=44, cnt[87].x=132, cnt[87].l=48, cnt[87].c=0;
    cnt[88].i=125, cnt[88].v=45, cnt[88].x=135, cnt[88].l=49, cnt[88].c=0;
    cnt[89].i=126, cnt[89].v=45, cnt[89].x=139, cnt[89].l=50, cnt[89].c=0;
    cnt[90].i=126, cnt[90].v=45, cnt[90].x=140, cnt[90].l=50, cnt[90].c=1;
    cnt[91].i=127, cnt[91].v=45, cnt[91].x=141, cnt[91].l=50, cnt[91].c=2;
    cnt[92].i=129, cnt[92].v=45, cnt[92].x=142, cnt[92].l=50, cnt[92].c=3;
    cnt[93].i=132, cnt[93].v=45, cnt[93].x=143, cnt[93].l=50, cnt[93].c=4;
    cnt[94].i=133, cnt[94].v=46, cnt[94].x=144, cnt[94].l=50, cnt[94].c=5;
    cnt[95].i=133, cnt[95].v=47, cnt[95].x=145, cnt[95].l=50, cnt[95].c=6;
    cnt[96].i=134, cnt[96].v=48, cnt[96].x=146, cnt[96].l=50, cnt[96].c=7;
    cnt[97].i=136, cnt[97].v=49, cnt[97].x=147, cnt[97].l=50, cnt[97].c=8;
    cnt[98].i=139, cnt[98].v=50, cnt[98].x=148, cnt[98].l=50, cnt[98].c=9;
    cnt[99].i=140, cnt[99].v=50, cnt[99].x=150, cnt[99].l=50, cnt[99].c=10;
    cnt[100].i=140, cnt[100].v=50, cnt[100].x=150, cnt[100].l=50, cnt[100].c=11;
}
