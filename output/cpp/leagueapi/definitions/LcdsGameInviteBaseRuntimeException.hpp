#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsGameInviteBaseRuntimeException { /**/ 
    std::string rootCauseClassname;/**/
  };
  static void to_json(json& j, const LcdsGameInviteBaseRuntimeException& v) { 
    j["rootCauseClassname"] = v.rootCauseClassname;
  }
  static void from_json(const json& j, LcdsGameInviteBaseRuntimeException& v) { 
    v.rootCauseClassname = j.at("rootCauseClassname").get<std::string>(); 
  }
} 