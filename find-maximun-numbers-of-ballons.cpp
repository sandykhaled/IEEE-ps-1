lass Solution{
public:
    int maxNumberOfBalloons(string text) {
        int a = 0;
        int b = 0;
        int l = 0;
        int o = 0;
        int n = 0;
        for (auto& ch : text) {
            switch (ch) {
                case 'a':
                a++;
                break;
                case 'b':
                b++;
                break;;
                case 'n':
                n++;
                break;
                case 'l':
                l++;
                break;
                case 'o':
                o++;
                break;
            }
        }
        if (a > b)a = b;
        if (a > l / 2)a = l / 2;
        if (a > n)a = n;
        if (a > o / 2)a = o / 2;
        return a;

    }
};