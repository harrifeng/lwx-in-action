#include<stdio.h>
#define N 100
int main ()
{
    int a[N][2], n, m=0, h=0, i, j, k;
    char s[N][12];
    scanf ( "%d", &n );
    for ( i=0; i<n; i++ )
    {
        scanf ( "%s %d %d", s[i], &a[i][0], &a[i][1] );
    }
    for ( i=1; i<=12; i++ )
    {
        m=0;
        for ( j=0; j<n; j++ )
            if ( a[j][0] == i )
                m++;
        if ( m>1 )
        {
            for ( k=1; k<32; k++ )
            {
                h=0;
                for ( j=0; j<n; j++ )
                    if ( a[j][0] == i && a[j][1] == k )
                        h++;
                if ( h>1 )
                {
                    printf ( "%d %d", i, k );
                    for ( j=0; j<n; j++ )
                        if ( a[j][0] == i && a[j][1] == k )
                            printf ( " %s", s[j] );
                    printf ( "\n" );
                }
            }
        }
    }
    return 0;
}
