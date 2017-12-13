#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsGameInviteBaseRuntimeException { 
    std::string rootCauseClassname; 
  };
  void to_json(json& j, const LcdsGameInviteBaseRuntimeException& v) {
    j["rootCauseClassname"] = v.rootCauseClassname; 
  }
  void from_json(const json& j, LcdsGameInviteBaseRuntimeException& v) {
    v.rootCauseClassname = j.at("rootCauseClassname").get<std::string>(); 
  }
}