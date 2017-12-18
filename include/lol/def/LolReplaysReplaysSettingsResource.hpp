#pragma once
#include "../base_def.hpp" 
#include "LolReplaysReplaysSettingsData.hpp"
namespace lol {
  struct LolReplaysReplaysSettingsResource { 
    LolReplaysReplaysSettingsData data; 
  };
  inline void to_json(json& j, const LolReplaysReplaysSettingsResource& v) {
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolReplaysReplaysSettingsResource& v) {
    v.data = j.at("data").get<LolReplaysReplaysSettingsData>(); 
  }
}