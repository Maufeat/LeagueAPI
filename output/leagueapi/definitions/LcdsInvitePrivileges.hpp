#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsInvitePrivileges { /**/ 
    bool canInvite;/**/
  };
  static void to_json(json& j, const LcdsInvitePrivileges& v) { 
    j["canInvite"] = v.canInvite;
  }
  static void from_json(const json& j, LcdsInvitePrivileges& v) { 
    v.canInvite = j.at("canInvite").get<bool>(); 
  }
} 