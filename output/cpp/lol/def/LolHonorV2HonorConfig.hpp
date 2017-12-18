#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2HonorConfig { 
    bool Enabled;
    bool DayOneModalEnabled;
    bool Honor2018Enabled;
    int32_t SecondsToVote; 
  };
  inline void to_json(json& j, const LolHonorV2HonorConfig& v) {
    j["Enabled"] = v.Enabled; 
    j["DayOneModalEnabled"] = v.DayOneModalEnabled; 
    j["Honor2018Enabled"] = v.Honor2018Enabled; 
    j["SecondsToVote"] = v.SecondsToVote; 
  }
  inline void from_json(const json& j, LolHonorV2HonorConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>(); 
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>(); 
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>(); 
  }
}