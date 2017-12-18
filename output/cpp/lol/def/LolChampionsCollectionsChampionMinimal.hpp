#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsOwnership.hpp>
namespace lol {
  struct LolChampionsCollectionsChampionMinimal { 
    std::string alias;
    uint64_t purchased;
    std::vector<std::string> roles;
    std::string chooseVoPath;
    LolChampionsCollectionsOwnership ownership;
    std::string name;
    std::string banVoPath;
    int32_t id;
    bool freeToPlay;
    bool botEnabled;
    bool active;
    std::string squarePortraitPath;
    std::vector<std::string> disabledQueues;
    bool rankedPlayEnabled;
    std::string stingerSfxPath; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionMinimal& v) {
    j["alias"] = v.alias; 
    j["purchased"] = v.purchased; 
    j["roles"] = v.roles; 
    j["chooseVoPath"] = v.chooseVoPath; 
    j["ownership"] = v.ownership; 
    j["name"] = v.name; 
    j["banVoPath"] = v.banVoPath; 
    j["id"] = v.id; 
    j["freeToPlay"] = v.freeToPlay; 
    j["botEnabled"] = v.botEnabled; 
    j["active"] = v.active; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["disabledQueues"] = v.disabledQueues; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionMinimal& v) {
    v.alias = j.at("alias").get<std::string>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.name = j.at("name").get<std::string>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.active = j.at("active").get<bool>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
  }
}