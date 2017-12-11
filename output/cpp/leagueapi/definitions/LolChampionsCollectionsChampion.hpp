#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsOwnership.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionSpell.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionSkin.hpp>

namespace leagueapi {
  struct LolChampionsCollectionsChampion { /**/ 
    std::string chooseVoPath;/**/
    uint64_t purchased;/**/
    int32_t id;/**/
    std::string name;/**/
    LolChampionsCollectionsChampionSpell passive;/**/
    std::string alias;/**/
    std::vector<std::string> disabledQueues;/**/
    std::vector<LolChampionsCollectionsChampionSpell> spells;/**/
    std::vector<std::string> roles;/**/
    std::string squarePortraitPath;/**/
    bool freeToPlay;/**/
    bool botEnabled;/**/
    LolChampionsCollectionsOwnership ownership;/**/
    std::string banVoPath;/**/
    std::vector<LolChampionsCollectionsChampionSkin> skins;/**/
    std::string stingerSfxPath;/**/
    bool active;/**/
    bool rankedPlayEnabled;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampion& v) { 
    j["chooseVoPath"] = v.chooseVoPath;
    j["purchased"] = v.purchased;
    j["id"] = v.id;
    j["name"] = v.name;
    j["passive"] = v.passive;
    j["alias"] = v.alias;
    j["disabledQueues"] = v.disabledQueues;
    j["spells"] = v.spells;
    j["roles"] = v.roles;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["freeToPlay"] = v.freeToPlay;
    j["botEnabled"] = v.botEnabled;
    j["ownership"] = v.ownership;
    j["banVoPath"] = v.banVoPath;
    j["skins"] = v.skins;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["active"] = v.active;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampion& v) { 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell>>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin>>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
} 