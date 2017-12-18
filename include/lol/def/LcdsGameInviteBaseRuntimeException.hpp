#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsGameInviteBaseRuntimeException { 
    std::string rootCauseClassname; 
  };
  inline void to_json(json& j, const LcdsGameInviteBaseRuntimeException& v) {
    j["rootCauseClassname"] = v.rootCauseClassname; 
  }
  inline void from_json(const json& j, LcdsGameInviteBaseRuntimeException& v) {
    v.rootCauseClassname = j.at("rootCauseClassname").get<std::string>(); 
  }
}