#include<QDialog>
#include<QPushButton>
#include<QLabel>
#include<QVBoxLayout>

class RecordsDialog : public QDialog
{
    Q_OBJECT

public:
    RecordsDialog(QWidget *parent=0);
    ~RecordsDialog();

private slots:
    void selectRecordSlot();
    void addRecordSlot();

  private:
    QPushButton *selectRecord;
    QLabel* fileSelected;
    QPushButton *addRecord;
    QVBoxLayout *mainLayout;
};
