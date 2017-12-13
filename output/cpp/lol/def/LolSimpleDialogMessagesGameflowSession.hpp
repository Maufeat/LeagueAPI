#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSimpleDialogMessagesGameflowPhase.hpp>
namespace lol {
  struct LolSimpleDialogMessagesGameflowSession { 
    LolSimpleDialogMessagesGameflowPhase phase; 
  };
  void to_json(json& j, const LolSimpleDialogMessagesGameflowSession& v) {
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolSimpleDialogMessagesGameflowSession& v) {
  v.phase = j.at("phase").get<LolSimpleDialogMessagesGameflowPhase>(); 
  }
}