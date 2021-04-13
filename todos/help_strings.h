#pragma once

const char* help_strings[] = {

// NONE
"A todo-system for the command line.\n"
"   usage: %s [-help] <command> [<args>]\n"
"\n"
"List of commands used in c-todo:\n"
"\n"
"read commands\n"
"   show    Show todos (all or with given index/tag)\n"
"   find    Find for todos that contain given subtring\n"
"   tags    List all tags\n"
"\n"
"write commands\n"
"   add     Add todo and tags\n"
"   remove  Remove todo with given index/tag\n"
"   edit    Edit todo with given index\n"
"\n"
"For more information about specific commands, use -help\n"
"along with the command. Like below:\n"
"\n"
"   $ %s show -help OR $ %s -help show\n"
,

// SHOW
"Show todos (all or with given index/tag).\n"
"   usage: %s show [-show-tags] [<index>...] [<tag>...]\n"
"\n"
"options\n"
"   <index>...  Indices of todos to be shown (* displays all indices)\n"
"   <tag>...    All todos with these tags will be shown\n"
"   -show-tags  Show tags linked with displayed todos\n"
,

// FIND
"Find for todos that contain given subtring.\n"
"   usage: %s find [-show-tags] <arg>\n"
"\n"
"options\n"
"   <arg>       Substring to search in all todos\n"
"   -show-tags  Show tags linked with displayed todos\n"
,

// TAGS
"List all tags.\n"
"   usage: %s tags\n"
"\n"
"Any additional options will be ignored.\n"
,

// ADD
"Add todo and tags.\n"
"   usage: %s add <task> [<tag>...]\n"
"\n"
"options\n"
"   <task>   Task for new todo\n"
"   <tag>... Tags associated with new todo\n"
,

// REMOVE
"Remove todo with given index/tag.\n"
"   usage: %s remove [<index>...] [<tags>...]\n"
"\n"
"options\n"
"   <index>... Indices of todos to be removed (* removes all indices)\n"
"   <tag>...   All todos with these tags will be removed\n"
,

// EDIT
"Edit todo with given index.\n"
"   usage: %s edit <index> <task> [<tags>...]\n"
"\n"
"options\n"
"   <index>  Index of todo to be edited\n"
"   <task>   New task for todo\n"
"   <tag>... New tags associated with selected todo\n"
,

};