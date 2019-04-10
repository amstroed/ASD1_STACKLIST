//
//  StackList.h
//

#ifndef StackList_h
#define StackList_h

#include <utility>

namespace asd1 {

	class StackEmptyException { };

	template<typename T>
	class StackList {
	public:
		using value_type = T;
		using reference = T & ;
		using const_reference = const T&;

	private:
		struct Node {
			Node* nxt;
			value_type val;
		};
		Node* topNode;

	public:

		// A compl�ter sans ajouter d'attributs priv�s et sans utiliser le type T
		// autrement que via les types value_type, reference et const_reference
		//
		// vous devez mettre en oeuvre le constructeur par d�faut, le destructeur,
		// les m�thodes push, pop, top et empty, ainsi que le constructeur de copie
		// et l'op�rateur d'affectation par copie. Quand c'est pertinent, il faut
		// lever l'exception StackEmptyException
		//
		// Cette classe doit offrir garanties faible et forte pour toutes ses
		// fonctionalit�s

	}

#endif /* StackList_h */