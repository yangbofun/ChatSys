#ifndef OTHERFUNC_HPP
#define OTHERFUNC_HPP
#include"utility.hpp"

void to_json(json& j, const User& u);
void from_json(const json& j, User& u);
int findinredis(std::string ipaddr,PortTp port, IDTp ID, User& outuser);

std::string redisIDkey(IDTp ID);
int writeRedisUser(const std::string& ipaddr, PortTp port, const User& user);
int modifyRedisUser(const std::string& ipaddr, PortTp port, const User& user);
int findUser(IDTp frdID, std::map<IDTp, User*>* pusersbyID/*and redis*/, User** outppusermap, User* outpuserRedis);
#endif