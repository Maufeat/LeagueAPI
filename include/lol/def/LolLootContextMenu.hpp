#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootContextMenu { 
    std::string requiredOthers;
    bool enabled;
    int32_t essenceQuantity;
    std::string essenceType;
    std::string name;
    std::string actionType;
    std::string requiredOthersName;
    std::string requiredTokens;
    int32_t requiredOthersCount; 
  };
  inline void to_json(json& j, const LolLootContextMenu& v) {
    j["requiredOthers"] = v.requiredOthers; 
    j["enabled"] = v.enabled; 
    j["essenceQuantity"] = v.essenceQuantity; 
    j["essenceType"] = v.essenceType; 
    j["name"] = v.name; 
    j["actionType"] = v.actionType; 
    j["requiredOthersName"] = v.requiredOthersName; 
    j["requiredTokens"] = v.requiredTokens; 
    j["requiredOthersCount"] = v.requiredOthersCount; 
  }
  inline void from_json(const json& j, LolLootContextMenu& v) {
    v.requiredOthers = j.at("requiredOthers").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>(); 
    v.essenceType = j.at("essenceType").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>(); 
    v.requiredTokens = j.at("requiredTokens").get<std::string>(); 
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>(); 
  }
}