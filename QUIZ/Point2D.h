class Point2D {
private:
	int x;
	int y;
public:
	// Default Constructor
	Point2D();
	// Argumented Constructor
	Point2D(int, int);
	// Setter
	void setPoint(int, int);
	// Print Utility Function
	void print();
	// Calculate the distance between two points
	double calculateDistance(const Point2D &);
};