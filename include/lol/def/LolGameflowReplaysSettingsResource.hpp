#pragma once
#include "../base_def.hpp" 
#include "LolGameflowReplaysSettingsData.hpp"
namespace lol {
  struct LolGameflowReplaysSettingsResource { 
    LolGameflowReplaysSettingsData data; 
  };
  inline void to_json(json& j, const LolGameflowReplaysSettingsResource& v) {
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolGameflowReplaysSettingsResource& v) {
    v.data = j.at("data").get<LolGameflowReplaysSettingsData>(); 
  }
}