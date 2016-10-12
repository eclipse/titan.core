// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/5 R4D
// for eadrkir (eadrkir@eadrkir-VirtualBox) on Mon Apr 18 14:18:01 2016

// Copyright (c) 2000-2016 Ericsson Telecom AB

// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef Sem_160201_003_loopbackPort_HH
#define Sem_160201_003_loopbackPort_HH

#include "Sem_160201_invoking_altsteps_003.hh"

namespace Sem__160201__invoking__altsteps__003 {

class Sem__160201__003__loopbackPort : public Sem__160201__003__loopbackPort_BASE {
public:
	Sem__160201__003__loopbackPort(const char *par_port_name = NULL);
	~Sem__160201__003__loopbackPort();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

private:
	/* void Handle_Fd_Event(int fd, boolean is_readable,
		boolean is_writable, boolean is_error); */
	void Handle_Fd_Event_Error(int fd);
	void Handle_Fd_Event_Writable(int fd);
	void Handle_Fd_Event_Readable(int fd);
	/* void Handle_Timeout(double time_since_last_call); */
protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const INTEGER& send_par);
};

} /* end of namespace */

#endif
