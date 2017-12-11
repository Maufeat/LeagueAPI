#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootLootRarity.hpp>"
#include "<leagueapi/definitions/LolLootLootType.hpp>"

namespace leagueapi {
  struct LolLootLootItemGdsResource { /**/ 
    std::string startDate;/**/
    std::string id;/**/
    bool autoRedeem;/**/
    std::string description;/**/
    LolLootLootType type;/**/
    LolLootLootRarity rarity;/**/
    std::string name;/**/
    std::string image;/**/
    int32_t mappedStoreId;/**/
    int32_t lifetimeMax;/**/
    std::string endDate;/**/
  };
  static void to_json(json& j, const LolLootLootItemGdsResource& v) { 
    j["startDate"] = v.startDate;
    j["id"] = v.id;
    j["autoRedeem"] = v.autoRedeem;
    j["description"] = v.description;
    j["type"] = v.type;
    j["rarity"] = v.rarity;
    j["name"] = v.name;
    j["image"] = v.image;
    j["mappedStoreId"] = v.mappedStoreId;
    j["lifetimeMax"] = v.lifetimeMax;
    j["endDate"] = v.endDate;
  }
  static void from_json(const json& j, LolLootLootItemGdsResource& v) { 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.autoRedeem = j.at("autoRedeem").get<bool>(); 
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<LolLootLootType>(); 
    v.rarity = j.at("rarity").get<LolLootLootRarity>(); 
    v.name = j.at("name").get<std::string>(); 
    v.image = j.at("image").get<std::string>(); 
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>(); 
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
  }
} 