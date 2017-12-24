#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2HonorConfig { 
    bool Honor2018Enabled;
    bool Enabled;
    int32_t SecondsToVote;
    bool DayOneModalEnabled; 
  };
  inline void to_json(json& j, const LolHonorV2HonorConfig& v) {
    j["Honor2018Enabled"] = v.Honor2018Enabled; 
    j["Enabled"] = v.Enabled; 
    j["SecondsToVote"] = v.SecondsToVote; 
    j["DayOneModalEnabled"] = v.DayOneModalEnabled; 
  }
  inline void from_json(const json& j, LolHonorV2HonorConfig& v) {
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>(); 
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>(); 
  }
}