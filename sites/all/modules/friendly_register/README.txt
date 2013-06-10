--------------------------------------------------------------------------------
                             Friendly Register
--------------------------------------------------------------------------------

Maintainers:
  * Andrew M Riley

Project homepage: http://drupal.org/project/friendly_register

Friendly Register module allows users to see if a username or email address has 
already been used during registration before they submit the form. This module 
checks the database and returns an error if the username is already in use. In 
addition to checking the username the module checks if there is already an 
account using that email address, if there is, a message is displayed with 
links to the login or reset password pages.

Installation
------------
* Install this module into the appropriate modules directory.
* Enable this module.
* Make sure you have cron running on a regular basis (at least once per 24 hours)

Permissions
-----------
There is only one permission for this module and it is completely optional. Set
"Ignore Flood Checking" for a role if you wish them to not be checked by the
300 query a day limit. I would recommend against giving the "anonymous" role
this permission.
