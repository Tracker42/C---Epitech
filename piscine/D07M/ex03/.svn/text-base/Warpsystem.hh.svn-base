/**
 *
 *
 *
 */

#ifndef __WARPSYSTEM_H__
#define __WARPSYSTEM_H__

namespace {
	class QuantumReactor;
	class Core;
}

namespace WarpSystem {

	class QuantumReactor {
	private:
		bool _stability;

	public:
		QuantumReactor();
		~QuantumReactor();

		void setStability(bool stability);
		bool getStability();
		bool isStable();
	};

	class Core {
	private:
		QuantumReactor *_coreReactor;

	public:
		Core(QuantumReactor *coreReactor);
		~Core();

		bool getStability();
		void setStability(bool stability);

		QuantumReactor *getQuantumReactor();
		QuantumReactor *checkReactor();
		bool isStable();
	};

}

#endif
