#pragma once
#include "../base_def.hpp" 
#include "LolLootLootRarity.hpp"
#include "LolLootLootType.hpp"
namespace lol {
  struct LolLootLootItemGdsResource { 
    std::string description;
    bool autoRedeem;
    std::string endDate;
    std::string name;
    std::string id;
    LolLootLootRarity rarity;
    int32_t lifetimeMax;
    LolLootLootType type;
    std::string startDate;
    std::string image;
    int32_t mappedStoreId; 
  };
  inline void to_json(json& j, const LolLootLootItemGdsResource& v) {
    j["description"] = v.description; 
    j["autoRedeem"] = v.autoRedeem; 
    j["endDate"] = v.endDate; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["rarity"] = v.rarity; 
    j["lifetimeMax"] = v.lifetimeMax; 
    j["type"] = v.type; 
    j["startDate"] = v.startDate; 
    j["image"] = v.image; 
    j["mappedStoreId"] = v.mappedStoreId; 
  }
  inline void from_json(const json& j, LolLootLootItemGdsResource& v) {
    v.description = j.at("description").get<std::string>(); 
    v.autoRedeem = j.at("autoRedeem").get<bool>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.rarity = j.at("rarity").get<LolLootLootRarity>(); 
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>(); 
    v.type = j.at("type").get<LolLootLootType>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.image = j.at("image").get<std::string>(); 
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>(); 
  }
}