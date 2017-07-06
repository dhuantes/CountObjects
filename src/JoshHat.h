
class JoshHat
{
	public:
		JoshHat()
		{
			s_numJoshHatObjects++;
		}
		~JoshHat()
		{
			s_numJoshHatObjects--;
		}
		static int s_numJoshHatObjects;

};

