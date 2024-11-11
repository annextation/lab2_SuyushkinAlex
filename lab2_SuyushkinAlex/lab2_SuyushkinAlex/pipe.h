#pragma once

#include <string>

class Pipe 
{
	private:

		int id;
		static int MaxID;
		std::string name;
		double lenght;
		int diameter;
		bool repair;

	public:

		Pipe();

		static int get_MaxID();
		int get_id() const;
		std::string get_name() const;
		double get_lenght() const;
		int get_diameter() const;
		bool get_repair() const;

		void set_repair(bool new_repair);


		friend std::ostream& operator << (std::ostream& out, const Pipe& pipe);
		friend std::istream& operator >> (std::istream& in, Pipe& pipe);
};

