/**
 *
 *
 *
 */

#ifndef __MODEL_HH__
#define	__MODEL_HH__

#define NIBBLER_NAME "Nibbler"
#define NIBBLER_SIZE_MIN 10
#define NIBBLER_SIZE_MAX 100
#define NIBBLER_DELAY 200000
#define NIBBLER_SLEEP 15000

namespace Model {

	enum Direction {
		LEFT,
		UP,
		RIGHT,
		DOWN,
		STAY
	};

	enum Quit {
		UNKNOWN,
		ERROR,
		GUI,
		GAMEOVER,
		WIN,
		RUN
	};
#define NDirection Model::Direction
#define NQuit Model::Quit

}

#endif
