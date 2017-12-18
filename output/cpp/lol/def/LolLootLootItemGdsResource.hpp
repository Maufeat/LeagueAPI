#pragma once
#include "../base_def.hpp" 
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace lol {
  struct LolLootLootItemGdsResource { 
    std::string image;
    std::string startDate;
    bool autoRedeem;
    std::string endDate;
    LolLootLootType type;
    int32_t lifetimeMax;
    std::string description;
    std::string name;
    int32_t mappedStoreId;
    LolLootLootRarity rarity;
    std::string id; 
  };
  inline void to_json(json& j, const LolLootLootItemGdsResource& v) {
    j["image"] = v.image; 
    j["startDate"] = v.startDate; 
    j["autoRedeem"] = v.autoRedeem; 
    j["endDate"] = v.endDate; 
    j["type"] = v.type; 
    j["lifetimeMax"] = v.lifetimeMax; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["mappedStoreId"] = v.mappedStoreId; 
    j["rarity"] = v.rarity; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLootLootItemGdsResource& v) {
    v.image = j.at("image").get<std::string>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.autoRedeem = j.at("autoRedeem").get<bool>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.type = j.at("type").get<LolLootLootType>(); 
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>(); 
    v.rarity = j.at("rarity").get<LolLootLootRarity>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}