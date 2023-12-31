#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
namaPelanggan (alt),
jenisPembeli(Karyawan dan Mahasiswa)(taf),
menuMakanan(tah),
makanan(top),
minuman(al),
cemilan(nul),
jumlah pesanan(tap),
uang pembayaran(lah),
harga barang(ama),
diskon(takon),
total belanja(tat),
total bayar(tabe),
uang kembalian(akem)
free(frat),
bonus(bota)
*/
int main()
{
    char alt[30], *frat[] = {"Gorengan 1 pcs", "Es Kopi"};
    int tap, al, nul, tah, top, tat, taf;
    float lah, ama, takon, tabe, akem;

    printf("Masukan Nama Pelanggan : ");
    scanf("%s", alt);

    printf("1. Karyawan\n");
    printf("2. Mahasiswa\n");
    printf("Pilih Jenis Pembelian (1/2) : ");
    scanf("%i", &taf);

    if (taf != 1 && taf != 2)
    {
        printf("Pilihan Tidak Ada\n");
        return 0;
    }

    printf("Menu : \n");
    printf("1. Makanan\n");
    printf("2. Minuman\n");
    printf("3. Cemilan\n");
    printf("Masukan Menu (1/2/3) :");
    scanf("%i", &tah);

    if (tah != 1 && tah != 2 && tah != 3)
    {
        printf("Pilihan Tidak Ada\n");
        return 0;
    }

    switch (tah)
    {
    case 1:
        printf("1. Ayam Penyet\n");
        printf("2. Soto Ayam\n");
        printf("3. Nasi Goreng\n");
        printf("Pilih Makanan  (1/2/3) : ");
        scanf("%i", &top);

        if (top != 1 && top != 2 && top != 3)
        {
            printf("Pilihan Tidak Ada\n");
            return 0;
        }
        else
        {
            switch (top)
            {
            case 1:
                ama += 20000;
                break;

            case 2:
                ama += 15000;
                break;

            case 3:
                ama += 18000;
                break;

            default:
                break;
            }
        }

    case 2:
        printf("1. Teh Manis\n");
        printf("2. Es Kopi\n");
        printf("3. Nutrisari\n");
        printf("Pilih Minuman  (1/2/3) : ");
        scanf("%i", &al);

        if (al != 1 && al != 2 && al != 3)
        {
            printf("Pilihan Tidak Ada\n");
            return 0;
        }
        else
        {
            switch (al)
            {
            case 1:
                ama += 5000;
                break;

            case 2:
                ama += 6000;
                break;

            case 3:
                ama += 4000;
                break;
            default:
                break;
            }
        }

    case 3:
        printf("1. Aneka Gorengan\n");
        printf("2. Ciki-Ciki\n");
        printf("3. Basreng\n");
        printf("Pilih Cemilan  (1/2/3) : ");
        scanf("%i", &nul);

        if (nul != 1 && nul != 2 && nul != 3)
        {
            printf("Pilihan Tidak Ada\n");
            return 0;
        }
        else
        {
            switch (nul)
            {
            case 1:
                ama += 2500;
                break;
            case 2:
                ama += 5000;
                break;
            case 3:
                ama += 7000;
                break;
            default:
                break;
            }
        }

    default:
        break;
    }

    // Jumlah Pesanan
    printf("Masukkan jumlah pesanan: ");
    scanf("%i", &tap);

    // total belanja
    tat = ama * tap;
    printf("Total belanja: %i\n", tat);

    // No 3.
    if (taf == 2)
    {
        if (tat >= 50000)
        {
            takon = ama * 0.1;
        }
    }

    printf("Masukkan uang pembayaran: ");
    scanf("%f", &lah);

    // 4. Total Bayar
    tabe = tat - takon;
    printf("Total bayar: %.0f\n", tabe);

    // 5 Uang Kembalian
    if (lah >= tabe)
    {
        akem = lah - tabe;
    }
    else
    {
        akem = 0;
        takon = 0;
    }

    printf("\n\n================================================================\n\n");
    printf("Nama Pelanggan\t: %s\n", alt);
    printf("Jumlah Pesanan\t: %i\n", tap);
    printf("Total Belanja\t: %i\n", tat);
    printf("Diskon\t\t: %1.f\n", takon);

    if (tah == 1)
    {
        if (top == 1)
        {
            printf("Bonus\t\t: %s\n", frat[0]);
        }
        else if (tah == 2)
        {
            if (al == 1)
            {
                printf("Bonus\t\t: %s\n", frat[0]);
            }
        }
    }
    else if (tah == 3)
    {
        if (nul == 1 || nul == 2 || nul == 3)
        {
            if (tap >= 20)
            {
                printf("Free\t\t: %s\n", frat[1]);
            }
        }
    }
    printf("Total Bayar\t: %0.f\n", tabe);
    printf("\n================================================================\n");
    if (lah >= tabe)
    {
        printf("\nUang kembalian\t: %0.f\n", akem);
    }
    else
    {
        printf("\nMaaf Uang Anda Kurang \n");
    }
    printf("\n================================================================\n");
    return 0;
}