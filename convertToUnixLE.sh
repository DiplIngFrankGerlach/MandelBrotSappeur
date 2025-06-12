for FN in `ls *`; do
   cat ${FN}|tr \\r " " >/tmp/convertToUnixLE_tmp
   mv /tmp/convertToUnixLE_tmp ${FN}
done;
