#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RemotingPrivilege {  
    Admin_e = 254,
    Local_e = 255,
    None_e = 0,
    User_e = 127,
  };
  void to_json(json& j, const RemotingPrivilege& v) {
    if(v == RemotingPrivilege::Admin_e) {
      j = "Admin";
      return;
    }
    if(v == RemotingPrivilege::Local_e) {
      j = "Local";
      return;
    }
    if(v == RemotingPrivilege::None_e) {
      j = "None";
      return;
    }
    if(v == RemotingPrivilege::User_e) {
      j = "User";
      return;
    }
  }
  void from_json(const json& j, RemotingPrivilege& v) {
    if(j.get<std::string>() == "Admin") {
      v = RemotingPrivilege::Admin_e;
      return;
    } 
    if(j.get<std::string>() == "Local") {
      v = RemotingPrivilege::Local_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = RemotingPrivilege::None_e;
      return;
    } 
    if(j.get<std::string>() == "User") {
      v = RemotingPrivilege::User_e;
      return;
    } 
  }
}