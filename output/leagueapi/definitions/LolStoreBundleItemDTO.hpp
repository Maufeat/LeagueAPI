#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreBundleItemDTO { /**/ 
    int64_t discountedRp;/**/
    uint32_t quantity;/**/
    int32_t itemId;/**/
    int64_t rp;/**/
    std::string iconUrl;/**/
    std::string name;/**/
    int64_t ip;/**/
    std::string description;/**/
    std::string inventoryType;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const LolStoreBundleItemDTO& v) { 
    j["discountedRp"] = v.discountedRp;
    j["quantity"] = v.quantity;
    j["itemId"] = v.itemId;
    j["rp"] = v.rp;
    j["iconUrl"] = v.iconUrl;
    j["name"] = v.name;
    j["ip"] = v.ip;
    j["description"] = v.description;
    j["inventoryType"] = v.inventoryType;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, LolStoreBundleItemDTO& v) { 
    v.discountedRp = j.at("discountedRp").get<int64_t>(); 
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ip = j.at("ip").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 