System::IO::StreamReader^ inFile = gcnew System::IO::StreamReader("input.txt");
String^ line;
int rowIndex = 0;
while ((line = inFile->ReadLine()) != nullptr)
{
	cli::array<String^>^ temp = line->Split(' ');
	this->Catalog->Rows->Add();
	for (int i = 0; i < temp->Length; ++i)
	{
		this->Catalog->Rows[rowIndex]->Cells[i]->Value = temp[i];
	}
	++rowIndex;
}