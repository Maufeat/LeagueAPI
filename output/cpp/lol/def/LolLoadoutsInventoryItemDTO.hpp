#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsInventoryItemDTO { 
    int32_t itemId;
    std::string expirationDate;
    std::string entitlementId;
    uint64_t wins;
    std::string instanceTypeId;
    std::string eneitlementTypeId;
    bool rental;
    uint64_t quantity;
    bool f2p;
    std::string usedInGameDate;
    std::string instanceId;
    bool lsb;
    std::string inventoryType;
    std::string purchaseDate; 
  };
  void to_json(json& j, const LolLoadoutsInventoryItemDTO& v) {
  j["itemId"] = v.itemId; 
  j["expirationDate"] = v.expirationDate; 
  j["entitlementId"] = v.entitlementId; 
  j["wins"] = v.wins; 
  j["instanceTypeId"] = v.instanceTypeId; 
  j["eneitlementTypeId"] = v.eneitlementTypeId; 
  j["rental"] = v.rental; 
  j["quantity"] = v.quantity; 
  j["f2p"] = v.f2p; 
  j["usedInGameDate"] = v.usedInGameDate; 
  j["instanceId"] = v.instanceId; 
  j["lsb"] = v.lsb; 
  j["inventoryType"] = v.inventoryType; 
  j["purchaseDate"] = v.purchaseDate; 
  }
  void from_json(const json& j, LolLoadoutsInventoryItemDTO& v) {
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.expirationDate = j.at("expirationDate").get<std::string>(); 
  v.entitlementId = j.at("entitlementId").get<std::string>(); 
  v.wins = j.at("wins").get<uint64_t>(); 
  v.instanceTypeId = j.at("instanceTypeId").get<std::string>(); 
  v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>(); 
  v.rental = j.at("rental").get<bool>(); 
  v.quantity = j.at("quantity").get<uint64_t>(); 
  v.f2p = j.at("f2p").get<bool>(); 
  v.usedInGameDate = j.at("usedInGameDate").get<std::string>(); 
  v.instanceId = j.at("instanceId").get<std::string>(); 
  v.lsb = j.at("lsb").get<bool>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
  }
}