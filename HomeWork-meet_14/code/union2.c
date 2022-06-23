
#define DATA_MAX 1024 /* Maximum amount of data for a read and write */
struct open_msg
{
    char name[30];
};
/* Name of the tape */
struct read_msg
{
    int length;
};
/* Max data to tranfer in the read */
struct write_msg
{
    int length;
    /* Number of bytes to write */
    char data[DATA_MAX]; /* Data to write */
};

struct close_msg
{
};

const int OPEN_CODE = 0;
const int READ_CODE = 1;
const int WRITE_CODE = 2;
const int CLOSE_CODE = 3;

struct msg
{
    int msg;
    /* Message type */
    union
    {
        struct open_msg open_data;
        struct read_msg read_data;
        struct write_msg write_data;
        struct close_msg close_data

    } msg_data;
};
