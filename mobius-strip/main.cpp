#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

struct frame_t
{
	int front;
	int back;

	frame_t(const int& front, const int& back) : front(front), back(back)
	{
	}
};

bool trySortFrames(vector<frame_t>& frames)
{
	bool isSorted = false;
	for (int i = 1; i < frames.size(); i++)
	{
		for (int j = i; j > 0 && frames[j - 1].front > frames[j].front; j--)
		{
			swap(frames[j - 1], frames[j]);
		}
	}
	for (size_t i = 1; i < frames.size(); i++)
	{
		if (frames[i - 1].back > frames[i].back)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	size_t framesAmount;
	vector<frame_t> frames;
	cout << "Enter amount of frames = ";
	cin >> framesAmount;

	cout << "Fill frames:" << endl;
	for (size_t i = 0; i < framesAmount; i++)
	{
		int back, front;
		cout << i + 1 << ") front = ";
		cin >> front;
		cout << i + 1 << ") back = ";
		cin >> back;
		frames.push_back(frame_t(front, back));
	}
	if (!trySortFrames(frames))
	{
		cout << endl << "Unable to sort both sides" << endl;
	}
	else
	{
		cout << endl << "Both sides are sorted" << endl;
	}
	cout << endl << "Frames after sort:" << endl;
	for (size_t i = 0; i < frames.size(); i++)
	{
		cout << setw(4) << frames[i].front;
	}
	cout << endl;
	for (size_t i = 0; i < frames.size(); i++)
	{
		cout << setw(4) << frames[i].back;
	}
	return 0;
}
