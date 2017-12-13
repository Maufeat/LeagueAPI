#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsInvitePrivileges { 
    bool canInvite; 
  };
  void to_json(json& j, const LcdsInvitePrivileges& v) {
    j["canInvite"] = v.canInvite; 
  }
  void from_json(const json& j, LcdsInvitePrivileges& v) {
    v.canInvite = j.at("canInvite").get<bool>(); 
  }
}