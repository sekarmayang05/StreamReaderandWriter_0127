    while (true){
        cout << "-";
        // membuat setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }