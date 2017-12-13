#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowReplaysSettingsData.hpp>
namespace lol {
  struct LolGameflowReplaysSettingsResource { 
    LolGameflowReplaysSettingsData data; 
  };
  void to_json(json& j, const LolGameflowReplaysSettingsResource& v) {
  j["data"] = v.data; 
  }
  void from_json(const json& j, LolGameflowReplaysSettingsResource& v) {
  v.data = j.at("data").get<LolGameflowReplaysSettingsData>(); 
  }
}