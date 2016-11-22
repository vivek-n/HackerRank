    int n, q;
    int *vi = NULL;

    scanf("%d %d\n", &n, &q);

    int *vvi[n];

    for(int i=0; i<n; i++){
        int row_size;
        
        scanf("%d", &row_size);
        
        vi = (int*) malloc(sizeof(int) * row_size);
        
        for(int j=0; j<row_size; j++){
            scanf("%d", vi+j);
        }
        
        *(vvi + i) = vi;
    }

    for(int i=0; i<q; i++){
        int r, c;
        
        scanf("%d %d\n", &r, &c);
        
        printf("%d\n", vvi[r][c]);
    }

    for(int i=0; i<n; i++){
        free(vvi[i]);
    }
    
	return 0;
}
