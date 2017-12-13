#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysReplayContextData { 
    std::string componentType; 
  };
  void to_json(json& j, const LolReplaysReplayContextData& v) {
    j["componentType"] = v.componentType; 
  }
  void from_json(const json& j, LolReplaysReplayContextData& v) {
    v.componentType = j.at("componentType").get<std::string>(); 
  }
}