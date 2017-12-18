#pragma once
#include "../base_def.hpp" 
#include "LolSimpleDialogMessagesGameflowPhase.hpp"
namespace lol {
  struct LolSimpleDialogMessagesGameflowSession { 
    LolSimpleDialogMessagesGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesGameflowSession& v) {
    v.phase = j.at("phase").get<LolSimpleDialogMessagesGameflowPhase>(); 
  }
}