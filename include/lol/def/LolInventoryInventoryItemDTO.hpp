#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryItemDTO { 
    std::string entitlementId;
    uint64_t quantity;
    bool rental;
    std::string usedInGameDate;
    std::string eneitlementTypeId;
    std::string instanceTypeId;
    bool lsb;
    std::string purchaseDate;
    bool f2p;
    std::string expirationDate;
    std::string instanceId;
    std::string inventoryType;
    uint64_t wins;
    int32_t itemId; 
  };
  inline void to_json(json& j, const LolInventoryInventoryItemDTO& v) {
    j["entitlementId"] = v.entitlementId; 
    j["quantity"] = v.quantity; 
    j["rental"] = v.rental; 
    j["usedInGameDate"] = v.usedInGameDate; 
    j["eneitlementTypeId"] = v.eneitlementTypeId; 
    j["instanceTypeId"] = v.instanceTypeId; 
    j["lsb"] = v.lsb; 
    j["purchaseDate"] = v.purchaseDate; 
    j["f2p"] = v.f2p; 
    j["expirationDate"] = v.expirationDate; 
    j["instanceId"] = v.instanceId; 
    j["inventoryType"] = v.inventoryType; 
    j["wins"] = v.wins; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, LolInventoryInventoryItemDTO& v) {
    v.entitlementId = j.at("entitlementId").get<std::string>(); 
    v.quantity = j.at("quantity").get<uint64_t>(); 
    v.rental = j.at("rental").get<bool>(); 
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>(); 
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>(); 
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>(); 
    v.lsb = j.at("lsb").get<bool>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
    v.f2p = j.at("f2p").get<bool>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.instanceId = j.at("instanceId").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}