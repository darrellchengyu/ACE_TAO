// $Id$

#include "sum_server_i.h"

ACE_RCSID (ORT,
           sum_server_i,
           "$Id$")

sum_server_i::sum_server_i ()
{
}

CORBA::Long
sum_server_i::add_variables (CORBA::Long a,
                             CORBA::Long b
                             TAO_ENV_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  cout << __FILE__ << __LINE__ << endl;
  return a+b;
}
