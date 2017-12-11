#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RemotingPrivilege { /*Well-known privilege levels for bindable functions.*/ 
    Admin_e = 254, /*Maximum privilege level for remote administrators.*/ 
    Local_e = 255, /*Maximum possible privilege level. Used for in-process function calls.*/ 
    None_e = 0, /*Minimum possible privilege level.*/ 
    User_e = 127, /*Maximum privilege level for remote non-administrators.*/ 
  };
  static void to_json(json& j, const RemotingPrivilege& v) {
    switch(v) { 
    case RemotingPrivilege::Admin_e:
      j = "Admin";
    break;
    case RemotingPrivilege::Local_e:
      j = "Local";
    break;
    case RemotingPrivilege::None_e:
      j = "None";
    break;
    case RemotingPrivilege::User_e:
      j = "User";
    break;
    };
  }
  static void from_json(const json& j, RemotingPrivilege& v) {
    auto s = j.get<std::string>(); 
    if(s == "Admin") {
      v = RemotingPrivilege::Admin_e;
      return;
    } 
    if(s == "Local") {
      v = RemotingPrivilege::Local_e;
      return;
    } 
    if(s == "None") {
      v = RemotingPrivilege::None_e;
      return;
    } 
    if(s == "User") {
      v = RemotingPrivilege::User_e;
      return;
    } 
  }
} 